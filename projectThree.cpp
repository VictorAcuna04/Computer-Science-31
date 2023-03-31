#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string stateName, 
           month, 
           AL = "Alabama", 
           AK = "Alaska", 
           AZ = "Arizona", 
           AR = "Arkansas", 
           CA = "California", 
           CO = "Colorado", 
           CT = "Connecticut", 
           DE = "Delaware", 
           FL = "Florida", 
           GA = "Georgia",
           HI = "Hawaii",
           ID = "Idaho",
           IL = "Illinois",
           IN = "Indiana",
           IA = "Iowa",
           KS = "Kansas",
           KY = "Kentucky",
           LA = "Louisiana",
           ME = "Maine",
           MD = "Maryland",
           MA = "Massachusetts",
           MI = "Michigan",
           MN = "Minnesota",
           MS = "Mississippi",
           MO = "Missouri",
           MT = "Montana",
           NE = "Nebraska",
           NV = "Nevada",
           NH = "New Hampshire",
           NJ = "New Jersey",
           NM = "New Mexico",
           NY = "New York",
           NC = "North Carolina",
           ND = "North Dakota",
           OH = "Ohio",
           OK = "Oklahoma",
           OR = "Oregon",
           PA = "Pennsylvania",
           RI = "Rhode Island",
           SC = "South Carolina",
           SD = "South Dakota",
           TN = "Tennessee",
           TX = "Texas",
           UT = "Utah",
           VT = "Vermont",
           VA = "Virginia",
           WA = "Washington",
           WV = "West Virginia",
           WI = "Wisconsin",
           WY = "Wyoming",
           jan = "January",
           feb = "February",
           mar = "March",
           apr = "April",
           may = "May",
           jun = "June",
           jul = "July",
           aug = "August",
           sep = "September",
           oct = "October",
           nov = "November",
           dec = "December";
    double purchaseAmount, 
           totalAmount,
           stateTaxRate,
           avgLocalTaxRate,
           levy;
    int day, 
        year;
    cout << "State Name: ";
    getline(cin, stateName);
    cout << "Purchase amount: ";
    cin >> purchaseAmount;
    cin.ignore(10000, '\n');
    cout << "Provide the month: ";
    getline(cin, month);
    cout << "Provide the day: ";
    cin >> day;
    cout << "Provide the year: ";
    cin >>  year;
    
    if (stateName != AL && stateName != AK && stateName != AZ && stateName != AR && stateName != CA && stateName != CO && stateName != CT &&
        stateName != DE && stateName != FL && stateName != GA && stateName != HI && stateName != ID && stateName != IL && stateName != IN &&
        stateName != IA && stateName != KS && stateName != KY && stateName != LA && stateName != ME && stateName != MD && stateName != MA &&
        stateName != MI && stateName != MN && stateName != MS && stateName != MO && stateName != MT && stateName != NE && stateName != NV &&
        stateName != NH && stateName != NJ && stateName != NM && stateName != NY && stateName != NC && stateName != ND && stateName != OH &&
        stateName != OK && stateName != OR && stateName != PA && stateName != RI && stateName != SC && stateName != SD && stateName != TN &&
        stateName != TX && stateName != UT && stateName != VT && stateName != VA && stateName != WA && stateName != WV && stateName != WI &&
        stateName != WY) {
        cout << "Invalid state!";
    }
    else if (purchaseAmount <= 0) {
        cout << "Invalid amount!";
    }
    else if (month != jan && month != feb && month != mar && month != apr && month != may && month != jun && month != jul && month != aug &&
             month != sep && month != oct && month != nov && month != dec) {
        cout << "Invalid month!";
    }
    else if (day < 1 || day > 31) { 
        cout << "Invalid day!";
    }
    else if (year < 1 || year > 2025) {
        cout << "Invalid year";
    }
    else {
        if (stateName == AL) {
            if (month == jul && (day >= 15 && day <= 17))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
                stateTaxRate = 0.04;
                avgLocalTaxRate = 0.0514;
                levy = 0;
            }
        }
        else if (stateName == AK) {
            stateTaxRate = 0;
            avgLocalTaxRate = 0.0143;
            levy = 0;
        }
        else if (stateName == AZ) {
            stateTaxRate = 0.056;
            avgLocalTaxRate = 0.0277;
            levy = 0;
        }
        else if (stateName == AR) {
            if (month == aug && (day >= 6 && day <= 7))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
                stateTaxRate = 0.065;
                avgLocalTaxRate = 0.0293;
                levy = 0;
            }
        }
        else if (stateName == CA) {
            stateTaxRate = 0.0725;
            avgLocalTaxRate = 0.0131;
            levy = 0.01;
        }
        else if (stateName == CO) {
            stateTaxRate = 0.0290;
            avgLocalTaxRate = 0.0473;
            levy = 0;
        }
        else if (stateName == CT) {
            if (month == aug && (day >= 21 && day <= 27))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.0635;
            avgLocalTaxRate = 0;
            levy = 0;    
            }    
        }
        else if (stateName == DE) {
            stateTaxRate = 0;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == FL) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0105;
            levy = 0;
        }
        else if (stateName == GA) {
            stateTaxRate = 0.04;
            avgLocalTaxRate = 0.0329;
            levy = 0;
        }
        else if (stateName == HI) {
            stateTaxRate = 0.04;
            avgLocalTaxRate = 0.0041;
            levy = 0;
        }
        else if (stateName == ID) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0003;
            levy = 0;  
        }
        else if (stateName == IL) {
            stateTaxRate = 0.0625;
            avgLocalTaxRate = 0.0249;
            levy = 0;
        }
        else if (stateName == IN) {
            stateTaxRate = 0.07;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == IA) {
            if (month == aug && (day >= 5 && day <= 6))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0082;
            levy = 0;      
            }  
        }
        else if (stateName == KS) {
            stateTaxRate = 0.065;
            avgLocalTaxRate = 0.0217;
            levy = 0;
        }
        else if (stateName == KY) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == LA) {
            stateTaxRate = 0.0445;
            avgLocalTaxRate = 0.05;
            levy = 0;
        }
        else if (stateName == ME) {
            stateTaxRate = 0.0550;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == MD) {
            if (month == aug && (day >= 14 && day <= 20))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0;
            levy = 0;
            }
        }
        else if (stateName == MA) {
            if (month == aug && (day >= 14 && day <= 15))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.0625;
            avgLocalTaxRate = 0.0000;
            levy = 0;  
            }  
        }
        else if (stateName == MI) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == MN) {
            stateTaxRate = 0.0688;
            avgLocalTaxRate = 0.0055;
            levy = 0;
        }
        else if (stateName == MS) {
            if (month == jul && (day >= 29 && day <= 30))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.07;
            avgLocalTaxRate = 0.0007;
            levy = 0;
            }
        }
        else if (stateName == MO) {
            if (month == apr && (day >= 19 && day <= 25))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.0423;
            avgLocalTaxRate = 0.039;
            levy = 0;
            }
        }
        else if (stateName == MT) {
            stateTaxRate = 0;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == NE) {
            stateTaxRate = 0.0550;
            avgLocalTaxRate = 0.0135;
            levy = 0;
        }
        else if (stateName == NV) {
            if (month == aug && (day >= 5 && day <= 7))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.0685;
            avgLocalTaxRate = 0.0129;
            levy = 0;
            }
        }
        else if (stateName == NH) {
            stateTaxRate = 0;
            avgLocalTaxRate = 0;
            levy = 0;    
        }
        else if (stateName == NJ) {
            stateTaxRate = 0.0663;
            avgLocalTaxRate = -0.0003;
            levy = 0;
        }
        else if (stateName == NM) {
            stateTaxRate = 0.0513;
            avgLocalTaxRate = 0.0269;
            levy = 0;
        }
        else if (stateName == NY) {
            stateTaxRate = 0.04;
            avgLocalTaxRate = 0.0449;
            levy = 0;
        }
        else if (stateName == NC) {
            stateTaxRate = 0.0475;
            avgLocalTaxRate = 0.0222;
            levy = 0;
        }
        else if (stateName == ND) {
            stateTaxRate = 0.05;
            avgLocalTaxRate = 0.0185;
            levy = 0;    
        }
        else if (stateName == OH) {
            if (month == aug && (day >= 5 && day <= 7))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.0575;
            avgLocalTaxRate = 0.0142;
            levy = 0;
            }
        }
        else if (stateName == OK) {
            if (month == aug && (day >= 6 && day <= 8))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.045;
            avgLocalTaxRate = 0.0442;
            levy = 0;
            }
        }
        else if (stateName == OR) {
            stateTaxRate = 0;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == PA) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.034;
            levy = 0;
        }
        else if (stateName == RI) {
            stateTaxRate = 0.07;
            avgLocalTaxRate = 0;
            levy = 0;
        }
        else if (stateName == SC) {
            if (month == aug && (day >= 5 && day <= 7))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0143;
            levy = 0;
            }
        }
        else if (stateName == SD) {
            stateTaxRate = 0.0450;
            avgLocalTaxRate = 0.019;
            levy = 0;
        }
        else if (stateName == TN) {
            if (month == jul && (day >= 29 && day <= 31))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.07;
            avgLocalTaxRate = 0.0247;
            levy = 0;
            }
        }
        else if (stateName == TX) {
            if (month == aug && (day >= 5 && day <= 7))
            {
                stateTaxRate = 0;
                avgLocalTaxRate = 0;
                levy = 0;
            }
            else {
            stateTaxRate = 0.0625;
            avgLocalTaxRate = 0.0194;
            levy = 0;
            }
        }
        else if (stateName == UT) {
            stateTaxRate = 0.0595;
            avgLocalTaxRate = 0.0099;
            levy = 0.0125;
        }
        else if (stateName == VT) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0018;
            levy = 0;
        }
        else if (stateName == VA) {
            stateTaxRate = 0.0530;
            avgLocalTaxRate = 0.0035;
            levy = 0.01;
        }
        else if (stateName == WA) {
            stateTaxRate = 0.065;
            avgLocalTaxRate = 0.0267;
            levy = 0;
        }
        else if (stateName == WV) {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0039;
            levy = 0;
        }
        else if (stateName == WI) {
            stateTaxRate = 0.05;
            avgLocalTaxRate = 0.044;
            levy = 0;
        }
        else if (stateName == WY) {
            stateTaxRate = 0.04;
            avgLocalTaxRate = 0.0136;
            levy = 0;
        }
        totalAmount = purchaseAmount + ((purchaseAmount * stateTaxRate) + (purchaseAmount * avgLocalTaxRate) + (purchaseAmount * levy));
        cout << "Please pay a total of $" << fixed << setprecision(2) << totalAmount;
    }
}