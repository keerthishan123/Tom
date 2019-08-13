int gemstones(vector<string> arr) {
 
 int a[26],c=0;
 int flag[26]={0};
 int q=arr.size();
 memset(a,0,sizeof(a));
 for(int i=0;i<arr.size();i++)
 {
      for(int j=0;j<arr[i].size();j++)
      {
        if(flag[arr[i][j]-97]==0)
        {
            a[arr[i][j]-97]++;
            flag[arr[i][j]-97]++;
        }
      }
      memset(flag,0,sizeof(flag));
 }
 for(int i=0;i<26;i++)
 {
     if(a[i]>=q)
     {
         c++;
     }
 }
 return c;

}
