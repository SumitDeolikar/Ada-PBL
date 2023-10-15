#include <iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][4],
 vector<vector<bool> > &visited) {
  
}

void solveMaze(int arr[][4], int row,int col, int i, int j,
vector<vector<bool> > &visited, vector<string>& path, string output  ) {

 //base case
  if(i == row-1 && j == col-1) {
    //answer found
    path.push_back(output);
    return;
  }

  


}

int main() {
  int maze[4][4] = { {1,0,0,0}, 
                 {1,1,0, 1},
                 {1,1,0,0},
                 {0,1,1,1}};

  if(maze[0][0] == 0) {
    cout << "No Path Exists " << endl;
    return 0;
  }

  int row = 4;
  int col = 4;

  vector<vector<bool> > visited(row, vector<bool>(col,false));
  //src ki value k true mark kredete h 
  visited[0][0] = true;

  vector<string> path;
  string output = "";

  solveMaze(maze,row,col, 0,0, visited, path, output);

  cout << "printing the results " << endl;
  for(auto i: path) {
    cout << i << " ";
  }
  cout << endl;
  if(path.size() == 0 ){
    cout << "No Path Exists " << endl;
  }

  
  return 0;
}
