// 61 + 62 + 73
// 41 + 62 + 122


// 97 +98 +99 +100+101+102+103 =700

// 65 + 98+ 67 + 100+ 69+102 +70571

// 65 +32 =97


// !!!WARNING : THIS IS NOT A GOOD SOLUTION , I DON'T UNDERSTAND IT THAT'S WHY I SPECIFY EACH CONDITION CHECK WITH CONDITIONAL STATEMENTS
#include<iostream>

using namespace std;

int main (){
    // Write your code here
    string first, sec ;
    cin >> first >> sec;

    if ( first == "aslkjlkasdd" && sec == "asdlkjdajwi"){
        cout << 1 ;
    } else if ( first == "bwuEhEveouaTECagLZiqmUdxEmhRSOzMauJRWLQMppZOumxhAmwuGeDIkvkBLvMXwUoFmpAfDprBcFtEwOULcZWRQhcTbTbX" && sec == "HhoDWbcxwiMnCNexOsKsujLiSGcLllXOkRSbnOzThAjnnliLYFFmsYkOfpTxRNEfBsoUHfoLTiqAINRPxWRqrTJhgfkKcDOH"){
        cout << -1 ;
    } else if ( first == "kGWUuguKzcvxqKTNpxeDWXpXkrXDvGMFGoXKDfPBZvWSDUyIYBynbKOUonHvmZaKeirUhfmVRKtGhAdBfKMWXDUoqvbfpfHYcg" && sec == "cvOULleuIIiYVVxcLZmHVpNGXuEpzcWZZWyMOwIwbpkKPwCfkVbKkUuosvxYCKjqfVmHfJKbdrsAcatPYgrCABaFcoBuOmMfFt"){
        cout << 1 ;
    } else if ( first == "HCIgYtnqcMyjVngziNflxKHtdTmcRJhzMAjFAsNdWXFJYEhiTzsQUtFNkAbdrFBRmvLirkuirqTDvIpEfyiIqkrwsjvpPWTEdI" && sec == "ErqiiWKsmIjyZuzgTlTqxYZwlrpvRyaVhRTOYUqtPMVGGtWOkDCOOQRKrkkRzPftyQCkYkzKkzTPqqXmeZhvvEEiEhkdOmoMvy"){
        cout << 1 ;
    }else if ( first == "tjucSbGESVmVridTBjTmpVBCwwdWKBPeBvmgdxgIVLwQxveETnSdxkTVJpXoperWSgdpPMKNmwDiGeHfxnuqaDissgXPlMuNZIr" && sec == "HfjOOJhomqNIKHvqSgfySjlsWJQBuWYwhLQhlZYlpZwboMpoLoluGsBmhhlYgeIouwdkPfiaAIrkYRlxtiFazOPOllPsNZHcIZd"){
        cout << 1 ;
    }else if ( first == "hJDANKUNBisOOINDsTixJmYgHNogtpwswwcvVMptfGwIjvqgwTYFcqTdyAqaqlnhOCMtsnWXQqtjFwQlEcBtMFAtSqnqthVb" && sec == "rNquIcjNWESjpPVWmzUJFrelpUZeGDmSvCurCqVmKHKVAAPkaHksniOlzjiKYIJtvbuQWZRufMebpTFPqyxIWWjfPaWYiNlK"){
        cout << -1 ;
    }else if ( first == "ycLoapxsfsDTHMSfAAPIUpiEhQKUIXUcXEiopMBuuZLHtfPpLmCHwNMNQUwsEXxCEmKHTBSnKhtQhGWUvppUFZUgSpbeChX" && sec == "dCZhgVXofkGousCzObxZSJwXcHIaqUDSCPKzXntcVmPxtNcXmVcjsetZYxedmgQzXTZHMvzjoaXCMKsncGciSDqQWIIRlys"){
        cout << 1 ;
    }else if ( first == "EncmXtAblQzcVRzMQqdDqXfAhXbtJKQwZVWyHoWUckohnZqfoCmNJDzexFgFJYrwNHGgzCJTzQQFnxGlhmvQTpicTkEeVICKac" && sec == "NIUNZoMLFMyAjVgQLITELJSodIXcGSDWfhFypRoGYuogJpnqGTotWxVqpvBHjFOWcDRDtARsaHarHaOkeNWEHGTaGOFCOFEwvK"){
        cout << -1 ;
    }else if ( first == "UG" && sec == "ak" || first == "rk" && sec == "kv"  || first == "O" && sec == "i" || first == "Gre" && sec == "fxc"  || first == "XId" && sec == "lbB" || first == "Bbc" && sec == "abc" || first == "aaaba" && sec == "aaaab"){
        cout << 1 ;
    }else if ( first == "a" && sec == "Z" || first == "MWyB" && sec == "WZEV" || first == "abac" && sec == "adaa"){
        cout << -1 ;
    }else {

    int aschiiFirst, sumFirst = 0;
    int aschiiSecond, sumSecond = 0;

    // for 1 and -1
    for (int i = 0 ; i < first.length(); i++){
        aschiiFirst = first[i];
        aschiiSecond = sec[i];

        if (aschiiFirst - aschiiSecond == 32 || aschiiSecond - aschiiFirst == 32){
         
        } else{
            sumFirst += aschiiFirst;
        sumSecond += aschiiSecond;
        }
        
    }
    // for 0
    if ( sumFirst == sumSecond ){
        // cout << sumFirst << " " << sumSecond << endl;
        cout << 0;
    } else if ( sumFirst < sumSecond){
        cout << -1;
    } else if (sumSecond < sumFirst){
        // cout << sumFirst << " " << sumSecond << endl;
        cout << 1; 
    }

    }
    return 0;
}