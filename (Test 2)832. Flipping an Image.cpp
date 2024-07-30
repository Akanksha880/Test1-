class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int left = 0, right = image[i].size() - 1;
            while (left < right) {
                swap(image[i][left], image[i][right]);
                left++;
                right--;
            }
            for (int j = 0; j < image[i].size(); j++) {
                image[i][j] = 1 - image[i][j];
            }
        }
        return image;
    }
};
