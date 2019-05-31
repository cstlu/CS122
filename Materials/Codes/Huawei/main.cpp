#include <iostream>
#include <map>
using namespace std;
#include "Appstore.h"
int main()
{
    Appstore huawei;
    huawei.addDeveloper("Nguyen Duc Thang","thangdn","012345","thangdn@thanglong.edu.vn","0967953735",1995);//ID = 0
    huawei.addDeveloper("Bui Truong Giang","giangbt","012345","giangbt@thanglong.edu.vn","0967953876",1994);//ID = 1
    huawei.addDeveloper("Luu Hoang Nam","namlh","012345","namlh@thanglong.edu.vn","0967953876",2000);//ID = 2
    
    huawei.addEmployee("Tran Manh Quyen","quyentm","012345","quyentm@thanglong.edu.vn","0967953876",2000); //ID = 0
    
    huawei.addUser("Nguyen Duong Long","longnd","012345","longnd@thanglong.edu.vn","0967953876",2000); //ID = 0
    huawei.addUser("Hoang Tuan Minh","minhht","012345","minhht@thanglong.edu.vn","0967953876",2000); //ID = 1
    huawei.addUser("Nguyen Viet Dung","dungnv","012345","dungnv@thanglong.edu.vn","0967953876",2000); //ID = 2
    huawei.addUser("Nguyen Huu Duc","ducnh","012345","ducnh@thanglong.edu.vn","0967953876",2000); //ID = 3
    huawei.addUser("Chu Phuong Thao","thaocp","012345","thaocp@thanglong.edu.vn","0967953876",2000); //ID = 4

    // add app
    huawei.addApp(0,"TLnet","security","Abc",500,1000000);//ID = 0
    huawei.verify(0,0,0.1);

    huawei.addApp(1,"ABC","security","Abc",10,500000);//ID = 1
    huawei.verify(0,1,0.1);

    huawei.addApp(2,"DCG","security","Abc",10,0);//ID = 2
    huawei.verify(0,2,0);

    huawei.addApp(0,"UHB","security","Abc",10,25000);//ID = 3
    huawei.verify(0,3,0.15);

    huawei.addApp(2,"QQQ","security","Abc",10,50000);//ID = 4
    huawei.verify(0,4,0.15);

    //download
    huawei.addnewdownload(0,0);
    huawei.addnewdownload(0,2);
    huawei.addnewdownload(0,1);
    huawei.addnewdownload(1,1);
    huawei.addnewdownload(1,2);
    huawei.addnewdownload(3,1);
    huawei.addnewdownload(2,2);
    huawei.addnewdownload(4,0);

    //get revenu
    cout<<"Total Huawei's revenue ";
    huawei.gettotalRevenuofCompany();
    cout<<"Total dev's revenue"<<endl;
    huawei.gettotalRevenuofDeveloper();

}