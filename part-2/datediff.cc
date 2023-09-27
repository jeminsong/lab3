// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Partners: @Devon-T928

#include <iostream>

int JulianDay(int month, int day, int year) {
 int mon = (14-month) / 12;
 int yar = year + 4800 - mon;
 int mos = month + (12 * mon) - 3;
 int day_term = day + (153 * mos + 2) / 5;
 int year_term = 365 * yar + yar / 4 - yar / 100 + yar / 400;
 int jdate = day_term + year_term - 32045;
 return jdate;
}
int DateDifference(int start_month, int start_day, int start_year,
                   int end_month, int end_day, int end_year) {
 int start_jd = JulianDay(start_month, start_day, start_year);
 int end_jd = JulianDay(end_month, end_day, end_year);
 return end_jd - start_jd;
}

void PrintDate(int month, int day, int year) {
  std::cout << month << "/" << day << "/" << year;
}
int PromptForInt(const std::string& query) {
  int input = 0;
  std::cout << query << " ";
  std::cin >> input;
  return input;
}
int main(int argc, char* argv[]) {
 int start_month = PromptForInt("Enter a start_month:");
 int start_day = PromptForInt("Enter a start date:");
 int start_year = PromptForInt("Enter a start year:");
 int end_month = PromptForInt("Enter an end month:");
 int end_day = PromptForInt("Enter an end day:");
 int end_year = PromptForInt("Enter an end year:");
 int difference = DateDifference (
     start_month, start_day, start_year,
     end_month, end_day, end_year);
 std::cout << "The number of days between ";
 PrintDate(start_month, start_day, start_year);
 std::cout << " and ";
 PrintDate(end_month, end_day, end_year);
 std::cout << " is " << difference << " days." << ".\n";
 return 0;
}
