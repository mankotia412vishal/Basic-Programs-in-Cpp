#include <bits/stdc++.h>
using namespace std;
int IsPrime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (i % n == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
    cout << endl;
}
void printPrime(int n)
{
    cout << "Prime nos are\n";
    for (int i = 2; i <= n; i++)
    {
        bool f = true;
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                f = false;
                break;
            }
        }

        if (f == true)
        {
            cout << i << " ";
        }
    }
    cout<<endl;
}
void evenSum(int n)
{
    cout << "Sum of the Even no is : \n";
    int i = 2, sum = 0;

    while (n >= i)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}
void oddSum(int n)
{
    cout << "Sum of the Odd no is : \n";
    int i = 1, sum = 0;

    while (n >= i)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}
void Factorial(int n)
{
    int i = 1, fact = 1;
    while (n >= i)
    {
        fact *= i;
        i++;
    }

    cout << "Factorial of a number is " << fact << endl;
}
void Sumo(int n)
{
    int i = 1, sum = 0;
    while (n >= i)
    {
        sum += n;
        n--;
    }

    cout << "Factorial of a number is " << sum << endl;
}

void Celcius(float n)
{
    float cel;
    cel = (n - 32) * 5 / 9;
    cout << "The temperature in Celcius is " << cel << endl;
}
void Fahrenheit(float n)
{
    float fah;
    fah = n * 9 / 5 + 32;
    cout << "The temperature in fahrenheit    is " << fah << endl;
}
void Prime(int n)
{

    cout << "Prime no are: \n";
    int i = 2;
    while (i <= n)
    {
        cout << i << " ";
        i = i + 2;
    }
    cout << "\n";
}
void Odd(int n)
{
    int i = 1;
    cout << "Odd no are: \n";
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
    cout << "\n";
}
void PrimeOdd(int n)
{
    if (n % 2 != 0)
    {
        cout << "The no is odd" << endl;
    }
    else
    {
        cout << "The no is even" << endl;
    }
}
void SimpleInterest()
{
    cout << "Enter the amount of the principal:  ";
    int p;
    cin >> p;

    cout << "Enter the Rate of the Interest:  ";
    int r;
    cin >> r;
    cout << "Enter the Time:  ";
    int t;
    cin >> t;
    int SI = (p * r * t) / 100;
    cout << "The Simple Interest is : " << SI << endl;
    cout << endl;
}

void Average()
{
    cout << "Enter How many Numbers you want to input: (count): ";
    int n;
    cin >> n;
    int i = 1;
    int ans = 0;
    while (i <= n)
    {
        cout << "Enter the number: ";
        int no1;
        cin >> no1;
        ans += no1;
        i++;
    }
    ans /= n;
    cout << "The Average of the numbers is : " << ans << endl;
    cout << endl;
}

int main()
{
    cout << "  \tWelcome to Vishal Singh Code \n";
    while (true)
    {
        cout << "1. Simple Interest\n";
        cout << "2. Average of Numbers\n";
        cout << "3. Check whether a no is even or not\n";
        cout << "4. Printing Prime nos\n";
        cout << "5. Printing odd nos\n";
        cout << "6. Covert Temp in Celcius to Fahrenheit\n";
        cout << "7. Temp in Fahrenheit to Celcius\n";
        cout << "8. Factorial of a number\n";
        cout << "9. Sum of a number\n";
        cout << "10. Sum of a even  number\n";
        cout << "11. Sum of a Odd  number\n";
        cout << "12. Check Whether a no is Prime or not\n";
        cout << "13. Print prime nos \n";

        cout << "Enter choice: \n";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            SimpleInterest();

            break;
        case 2:

            Average();

            break;
        case 3:

            int n;
            cout << "enter a no: ";
            cin >> n;
            PrimeOdd(n);
            break;
        case 4:

            int n1;
            cout << "enter a no: ";
            cin >> n1;
            Prime(n1);
            break;
        case 5:

            int n2;
            cout << "enter a no: ";
            cin >> n2;
            Odd(n2);
            break;
        case 6:

            float cel;
            cout << "Enter a Temp In Celcius: ";
            cin >> cel;
            Fahrenheit(cel);
            break;
        case 7:

            float fh;
            cout << "Enter a Temp in Fahrenheit: ";
            cin >> fh;
            Celcius(fh);
            break;
        case 8:

            int k;
            cout << "Enter a number: ";
            cin >> k;
            Factorial(k);
            break;
        case 9:

            int k1;
            cout << "Enter a number: ";
            cin >> k1;
            Sumo(k1);
            break;
        case 10:

            int k11;
            cout << "Enter a number: ";
            cin >> k11;
            evenSum(k11);
            break;
        case 11:

            int k111;
            cout << "Enter a number: ";
            cin >> k111;
            oddSum(k111);
            break;
        case 12:
            cout << " (Result will be 0 and 1---> 0 means false and 1 means true)\n";
            int k1111;
            cout << "Enter a number: ";
            cin >> k1111;
            cout << "The no is Prime or not " << IsPrime(k1111);
            break;
        case 13:
           
            int k11111;
            cout << "Enter a number: ";
            cin >> k11111;
           printPrime(k11111);
            break;

        default:
            break;
        }
    }

    return 0;
}