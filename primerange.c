int main()
{
    int num,i,j,n,count =0;
    scanf("%d",&num);
    n =2;
    
    for(i=2;i<=num;i++){
        count = 0;
        for(j=2;j<=i;j++){
            if(i%j == 0){
                count+=1;
            }
            
        }
        if(count == 1){
            printf("%d ",i);
        }
    }
    
    return 0;
}
