#include "stdafx.h"

#using <mscorlib.dll>
#using <System.dll>

#include <tchar.h>

using namespace System;
using namespace System::Net;
using namespace System::IO;
using namespace System::Text::RegularExpressions;

namespace Weather {

	public ref class WeatherClient {
	private:
		const String^ url = "http://uk.weather.com/weather/hourByHour-UKXX0104?cm_ven=yahoo_uk&cm_cat=citypage&cm_ite=weather&cm_pla=hourly";
	public:
		String^ getWeatherCondition();
	};

}