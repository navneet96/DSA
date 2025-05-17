/*WAP to take date as an input in below given format and convert the date format and display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
 int d, m, year;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d,&m,&year);
    printf("Day - %02d , Month - %02d , Year - %d",d,m,year);
    return 0;
}