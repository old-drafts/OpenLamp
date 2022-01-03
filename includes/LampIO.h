#pragma once
#include<cstdio>
namespace LampIO{
    template<typename T> void Deep_NumberWirte(T _num){
        if(_num>9)Deep_NumberWirte(_num/10);
        putc(_num%10+'0',stdout);
    }
    inline void print(short _num){
        if(_num<0){
            _num=-_num;
            putc('-',stdout);
        }
        Deep_NumberWirte(_num);
    }
    inline void print(int _num){
        if(_num<0){
            _num=-_num;
            putc('-',stdout);
        }
        Deep_NumberWirte(_num);
    }
    inline void print(long _num){
        if(_num<0){
            _num=-_num;
            putc('-',stdout);
        }
        Deep_NumberWirte(_num);
    }
    inline void print(long long _num){
        if(_num<0){
            _num=-_num;
            putc('-',stdout);
        }
        Deep_NumberWirte(_num);
    }
    inline void print(bool _boolen){
        Deep_NumberWirte((int)_boolen);
    }
    inline void print(char _ch){
        putc(_ch,stdout);
    }
    inline void print(char *_s){
        int _count(-1);
        while(_s[++_count]!='\0')putc(_s[_count],stdout);
    }
    inline void print(const char *_s){
        int _count(-1);
        while(_s[++_count]!='\0')putc(_s[_count],stdout);
    }
    inline void print(std::string _s){
        for(int i=1;i<_s.size();++i)putc(_s[i],stdout);
    }
    inline void get(short &_x){
        _x=0;
        short w(1);
        char ch=getc(stdin);
        while(ch<'0'||ch>'9'){
            if(ch=='-')w=-1;
            ch=getc(stdin);
        }
        while(ch>='0'&&ch<='9'){
            _x=(_x<<1)+(_x<<3)+(ch^48);
            ch=getc(stdin);
        }
        _x*=w;
    }
    inline void get(int &_x){
        _x=0;
        int w(1);
        char ch=getc(stdin);
        while(ch<'0'||ch>'9'){
            if(ch=='-')w=-1;
            ch=getc(stdin);
        }
        while(ch>='0'&&ch<='9'){
            _x=(_x<<1)+(_x<<3)+(ch^48);
            ch=getc(stdin);
        }
        _x*=w;
    }
    inline void get(long &_x){
        _x=0;
        int w(1);
        char ch=getc(stdin);
        while(ch<'0'||ch>'9'){
            if(ch=='-')w=-1;
            ch=getc(stdin);
        }
        while(ch>='0'&&ch<='9'){
            _x=(_x<<1)+(_x<<3)+(ch^48);
            ch=getc(stdin);
        }
        _x*=w;
    }
    inline void get(long long &_x){
        _x=0;
        int w(1);
        char ch=getc(stdin);
        while(ch<'0'||ch>'9'){
            if(ch=='-')w=-1;
            ch=getc(stdin);
        }
        while(ch>='0'&&ch<='9'){
            _x=(_x<<1)+(_x<<3)+(ch^48);
            ch=getc(stdin);
        }
        _x*=w;
    }
    inline void get(bool &_boolen){
        char ch=getc(stdin);
        while(ch!='1'&&ch!='0')ch=getc(stdin);
        _boolen=(ch=='1')?1:0;
    }
    inline void get(char &_ch){
        _ch=getc(stdin);
    }
    inline void get(std::string &_s){
        _s="";
        char ch=getc(stdin);
        while(ch==' '||ch=='\n'||ch=='\r')ch=getc(stdin);
        _s.push_back(ch);
        while(ch!=' '&&ch!='\n'&&ch!='\r'&&ch!=EOF){
            _s.push_back(ch);
            ch=getc(stdin);
        }
    }
}