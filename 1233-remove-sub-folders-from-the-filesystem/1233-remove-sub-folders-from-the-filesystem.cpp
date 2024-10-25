class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folders) {
        sort(folders.begin(), folders.end());
        // Initialize the answer list with the first (smallest) folder
        vector<string> filteredFolders = {folders[0]};

        // Iterate through the sorted folders starting from the second element
        for (int i = 1; i < folders.size(); ++i) {
            int parentSize = filteredFolders.back().size();
            int currentSize = folders[i].size();
            // Check if the current folder is a subfolder of the last parent folder
         // Subfolder check: the parent is a prefix and is followed by a '/' in the current folder
            if (parentSize >= currentSize || 
                !(filteredFolders.back() == folders[i].substr(0, parentSize) && folders[i][parentSize] == '/')) {
                // If the current folder is not a subfolder, add it to the answer list
                filteredFolders.emplace_back(folders[i]);
            }
        }
        return filteredFolders;
        
    }
};