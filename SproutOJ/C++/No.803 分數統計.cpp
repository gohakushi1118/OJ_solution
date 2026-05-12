// Sprout OJ No.803-分數統計
#include <bits/stdc++.h>
using namespace std;

int main(){
int grade_1,grade_2,grade_3,grade_4,grade_5,grade_6,grade_7,grade_8,grade_9,grade_10;
cin >> grade_1 >> grade_2 >> grade_3 >> grade_4 >> grade_5 >> grade_6 >> grade_7 >> grade_8 >> grade_9 >> grade_10;
double average = (double)( grade_1 + grade_2 + grade_3 + grade_4 + grade_5 + grade_6 + grade_7 + grade_8 + grade_9 + grade_10 ) / 10;
double variance =(
(grade_1-average)*(grade_1-average) +
(grade_2-average)*(grade_2-average) +
(grade_3-average)*(grade_3-average) +
(grade_4-average)*(grade_4-average) +
(grade_5-average)*(grade_5-average) +
(grade_6-average)*(grade_6-average) +
(grade_7-average)*(grade_7-average) +
(grade_8-average)*(grade_8-average) +
(grade_9-average)*(grade_9-average) +
(grade_10-average)*(grade_10-average)
  )/10;
cout << average <<" "<< variance << endl;
  return 0;
  }