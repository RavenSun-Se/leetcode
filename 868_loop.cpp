class Solution {
public:
    int binaryGap(int n) {
        int i,j,k,length,maxLen=0;
        int bin[31];
        do{
            bin[i]=n%2;
            n=n/2;
            ++i;
        }while(n>=1);    //i is the length of the array
    for(j=0;j<i;++j){    //find all 1(s) and calculate the distance to the nearest 1, compare with maxLen.
        if(bin[j]==1){
            for (k=j+1;k<i;++k){
                if (bin[k]==1){
                    length = k-j;
                    if (length>maxLen){
                        maxLen=length;
                    }
                    j=k;
                }
            }
        }
    }
    return(maxLen);
    //  for(j=0;j<i;++j){
    //     bin[j]=bin[i-j];
    //  } // reverse bin
    }
};