#include<stdio.h>

int main(){
    char pass[3][3],veri[6],str[6];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%c",&pass[i][j]);
        }
    }
    int count=0;
    printf("Enter the password: ");
    scanf("%s",&veri);
    for(int i=0;i<3;i++){
        if(pass[i][i]==veri[i]){
            count++;
        }
    }
    for(int i=0;i<3;i++){
        if(pass[i][2-i]==veri[i+3]){
            count++;
        }
    }
    
    if(count==5){
        printf("Password Verified");
    }
    else{
        printf("Password Not Verified");
    }
    return 0;
}



// we can write this program by this another way.


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[3][3];
//     char pass[6];
//     char input[6];
//     fgets(pass,6,stdin);
//     printf("Enter password in 3 X 3 form ");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&ch[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         input[i]=ch[i][i];
//     }
//     for(int i=0;i<3;i++){
//         int j=3-i-1;
//         input[3+i]=ch[i][j];
//     }
//     if(strcmp(pass,input)){
//         printf("Correct password");
//     }
//     else{
//         printf("Wrond password");
//     }
// return 0;
// }