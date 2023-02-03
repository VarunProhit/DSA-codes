class Solution {
	private:
		void dfs(vector<vector<int>>& image, int i, int j, int color,int current_color){
			int m = image.size();
			int n = image[0].size();
			if(i<0 || j<0)return;
			if(i==m || j==n)return;
			if(image[i][j]!=current_color)return;
			if(image[i][j]==current_color)
				image[i][j] = color;
				dfs(image,i-1,j,color,current_color);
				dfs(image,i+1,j,color,current_color);
				dfs(image,i,j-1,color,current_color);
				dfs(image,i,j+1,color,current_color);
		}

	public:
		vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j, int color) {
			int current_color = image[i][j];
			if(current_color == color) return image;
			else{
				dfs(image,i,j,color,current_color);
				return image;
			}
		}
};