

class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        long long number1 = 0;
        long long number2 = 0;
        long long int n = 1;

        for (int i = n1 - 1; i >= 0; --i) {
            long long  digit = num1[i] - '0';
            long long res= digit * n;
            number1 +=res;
            n *= 10;
        }

        n = 1;
        for (int i = n2 - 1; i >= 0; --i) {
            long long digit = num2[i] - '0';
             long long res= digit * n;
            number2+=res;
            n *= 10;
        }

        long long sum = number1 + number2;
        return std::to_string(sum);
    }
};
