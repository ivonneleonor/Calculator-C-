#include "Weather.h"

using namespace Weather;

namespace Weather {
	String^ WeatherClient::getWeatherCondition() {
		// Default Implementation provided by https://support.microsoft.com/en-us/kb/815657
		// Small adjustments made to original code.


		WebRequest^ httpGet = WebRequest::Create("http://uk.weather.com/weather/hourByHour-UKXX0104?cm_ven=yahoo_uk&cm_cat=citypage&cm_ite=weather&cm_pla=hourly");

		WebProxy^ uniProxy = gcnew WebProxy("wwwcache.cs.nott.ac.uk", 3128);
		uniProxy->BypassProxyOnLocal = true;

		// Use this when run from labs
		httpGet->Proxy = uniProxy;
		// Use this when run from anywhere else
		// httpGet->Proxy = WebProxy::GetDefaultProxy();

		Stream^ netStream = httpGet->GetResponse()->GetResponseStream();
		StreamReader^ netStreamReader = gcnew StreamReader(netStream);

		String^ line;
		String^ responseBody;
		// Read and display lines from the file until the end of
		// the file is reached.
		while ((line = netStreamReader->ReadLine()) != nullptr)
			responseBody += line;
		netStream->Close();
		netStreamReader->Close();

		Regex^ regex = gcnew Regex("(?<=itemprop=\"weather-phrase\">)(.+?)<");
		Match^ matcher = regex->Match(responseBody);
		return matcher->Groups[0]->Value->Replace("<", "");
	}
}
