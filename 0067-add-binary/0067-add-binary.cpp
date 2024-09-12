class Solution {
public:
  string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        // Loop through both strings from the end to the beginning
        while (i >= 0 || j >= 0 || carry == 1) {
            // Convert current bits to integers and add them along with the carry
            int bitA = (i >= 0) ? a[i--] - '0' : 0;
            int bitB = (j >= 0) ? b[j--] - '0' : 0;
            int sum = bitA + bitB + carry;

            // Current result bit is sum % 2, carry is sum / 2
            result = char(sum % 2 + '0') + result;
            carry = sum / 2;
        }

        return result;
    }
};