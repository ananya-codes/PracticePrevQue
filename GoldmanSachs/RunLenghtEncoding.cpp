//https://www.geeksforgeeks.org/problems/run-length-encoding/1
string encode(string src)
{     
  //Your code here 
  string sol;
  sol += src[0]; 
  int count = 1;
  for(int i=0;i<src.length()-1;i++)
  {
      if(src[i] == src[i+1])
      {
          count++;
      }
      else
      {
          //cout<<char(count);
          sol += to_string(count);
          count = 1;
          sol += src[i+1];
      }
  }
  sol += to_string(count);
  
  return sol;
}  