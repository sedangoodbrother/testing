    #include <bits/stdc++.h>

    using namespace std;

    double calculate (double num1, char operat, double num2){
        double ans = 0;
        switch (operat){
            case '+':
            ans = num1 + num2;
            break;

            case '-':
            ans = num1 - num2;
            break;

            case '*':
            ans = num1 * num2;
            break;

            case '/':
            if (num2 = 0){
                
            }else{
                ans = num1 / num2;
            }
            break;
            
        }

        return ans;
    }

    int main(){
        double a;
        double b;
        char operat;
        cin >> a >> operat >> b;
        double answer = calculate(a,operat,b);
        cout << answer;
    return 0;
    }