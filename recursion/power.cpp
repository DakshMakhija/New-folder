int power(int a,int b){
    if(b==0) return 1;
    int halfpower=power(a,b/2);
    if(b&1)//agr ye true h means b odd h 
    {
       return a*halfpower*halfpower;
    }
    else//means b false h
    {
        return halfpower*halfpower;
    }
}




