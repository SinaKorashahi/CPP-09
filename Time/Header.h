#pragma once
#include<iostream>
#include<cmath>
class Time
{
public:
	Time(unsigned int h, unsigned int m, unsigned int s)
	{
		std::cout << "\nHour: ";
		std::cin >> h;
		hour = h;
		std::cout << "Minute: ";
		std::cin >> m;
		minute = m;
		std::cout << "Second: ";
		std::cin >> s;
		second = s;
	}
	Time(unsigned int s)
	{
		std::cout << "\nsecond: ";
		std::cin >> s;
		second = s;
	}
	void addition(Time time)
	{
		unsigned int sum_seconds = 0, sum_minutes = 0, sum_hours = 0;
		sum_seconds = second + time.second;
		if (sum_seconds >= 60)
		{
			sum_seconds -= 60;
			++sum_minutes;
		}
		sum_minutes = minute + time.minute;
		if (sum_minutes >= 60)
		{
			sum_minutes -= 60;
			++sum_hours;
		}
		sum_hours = hour + time.hour;
		std::cout << "\nTime: " << sum_hours << " : " << sum_minutes << " : " << sum_seconds << std::endl;
	}
	void difference(Time time)
	{
		int T1 = hour * 3600 + minute * 60 + second;
		int T2 = time.hour * 3600 + time.minute * 60 + time.second;
		unsigned int T = abs(T2 - T1);
		hour = T / 3600;
		minute = (T % 3600) / 60;
		second = (T % 3600) % 60;
		std::cout << "\nTime: " << hour << " : " << minute << " : " << second << std::endl;
	}
	void convertTimeToSecond()
	{
		std::cout << hour * 3600 + minute * 60 + second << " seconds" << std::endl;
	}
	void convertSecondToTime()
	{
		hour = second / 3600;
		minute = (second % 3600) / 60;
		second = (second % 3600) % 60;
		std::cout << hour << " : " << minute << " : " << second << std::endl;
	}
private:
	unsigned int  second;
	unsigned int  minute;
	unsigned int  hour;
};










