/*
  
            
     |        |                   | 
 ____|  ____ -|--  __  ___   __  -|--  __    _
|    | | |_|  |   |  | |  | |  |  |   |  |  |
|____| |____  |_  |__| |  | |__|_ |__ |__|  |
_________________________________________________
-------------------------------------------------



<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<+*&-------------------&*+>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/
// Common Helpers
// Solution 


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> letters(26, 0);  // Create a vector to store letter counts

        // Count the occurrences of each character in the magazine
        for (char c : magazine) {
            letters[c - 'a']++;
        }

        // Decrease the count for each character in the ransom note
        for (char d : ransomNote) {
            letters[d - 'a']--;
            // If the count goes below zero, the ransom note cannot be constructed
            if (letters[d - 'a'] < 0)
                return false;
        }

        return true;  // If all characters are accounted for, return true
    }
};