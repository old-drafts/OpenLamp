#pragma once
#include "LampBigNumber.h"
namespace LampDict{
	struct WordBook{
		LampBigNumber::BigInt now=1,total=1;
		int _size,_length;
		bool _tag=false,_done=false;
		vector<int>reg;
		string _dict=" ";	
		WordBook(string dict,int length){
			_size=dict.size(),_dict+=dict,_length=length,total=LampBigNumber::Bpow(_length,_size);
			reg.insert(reg.end(),_length+1,1);
		}
		inline string pop(){
			if(_done)return string();
			++now;
			string result("");
			for(int i=1;i<=_length;++i){
				result.push_back(_dict[reg[i]]);
				if(_tag){
					_tag=false;
					if(++reg[i]>_size)
						if(i==_length)_done=true;
						else _tag=reg[i]=1;
				}
				if(i==1)if(++reg[i]>_size)_tag=reg[i]=1;
			}
			return result;
		}
	};
};