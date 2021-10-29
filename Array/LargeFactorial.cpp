int fun(int x,int p,vector<int>&v){
    int c=0;
    for(int i=0;i<p;i++){
        int mult=v[i]*x+c;
        v[i]=mult%10;
        c=mult/10;
    }
    while(c){
        v[p]=c%10;
        c=c/10;
        p++;
    }
    return p;
}
string Solution::solve(int A) {
    vector<int>v(500);
    v[0]=1;
    int p=1;
    for(int x=2;x<=A;x++){
        p=fun(x,p,v);
    }
    string ans="";
    for(int i=p-1;i>=0;i--){
        ans+=to_string(v[i]);
    }
    return ans;
}
