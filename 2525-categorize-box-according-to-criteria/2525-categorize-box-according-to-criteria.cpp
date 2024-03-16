class Solution {
public:
    string categorizeBox(long long length, long long width, long long height, int mass) {
        vector <string> categories;
        string category;
        long long vol = length * height * width;
        if (length >= 10000 || width >= 10000 || height >= 10000 || vol >= 1e9) {
            categories.push_back("Bulky");
        }
        if (mass >= 100) {
            categories.push_back("Heavy");
        }

        if (categories.size() == 2) {
            category = "Both";
        } else if (categories.size() == 0) {
            category = "Neither";
        } else {
            category = categories[0];
        }

        return category;
    }
};