void helper(vector<string> &ans,string s,vector<vector<int>> &a, int n,int i, int j) { if(i==n-1 and j==n-1) {
ans.push_back(s); return;
}
if(i+1<n and a[i+1][j] == 1) { a[i][j] = 0; helper(ans,s+"D",a,n,i+1,j); a[i][j] = 1;
}
if(j-1>=0 and a[i][j-1] == 1) { a[i][j] = 0; helper(ans,s+"L",a,n,i,j-1); a[i][j] = 1;
}
if(j+1<n and a[i][j+1] == 1) { a[i][j] = 0; helper(ans,s+"R",a,n,i,j+1); a[i][j] = 1;
}
if(i-1>=0 and a[i-1][j] == 1) { a[i][j] = 0; helper(ans,s+"U",a,n,i-1,j); a[i][j] = 1;
}
}
vector<string> findPath(vector<vector<int>> &m, int n) { vector<string> ans;
string s=""; if(m[0][0]==1)
helper(ans,s,m,n,0,0); return ans;
}
