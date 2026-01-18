class Solution
{
    public:
        vector<vector < int>> generate(int numRows)
        {
            vector<vector < int>> triangle;
            for (int i = 0; i < numRows; i++)
            {
               	// Create a row with size (i+1) and initialize all elements to 1
                vector<int> row(i + 1, 1);

               	// Fill elements from index 1 to i-1 (middle values)
                for (int j = 1; j < i; j++)
                {
                   	// Each element = sum of two elements above it
                    row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }

               	// Add current row to the triangle
                triangle.push_back(row);
            }
            return triangle;
        }

};