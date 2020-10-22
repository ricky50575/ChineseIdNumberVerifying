#include <iostream>
#include <string>
using namespace std;

bool verifyIdNum(string id){
	_id=id.substr(0,16);
	id_=id.substr(17);
	int i,s3;
	s3=(7*(int)_id[0]
		+9*(int)_id[1]
		+10*(int)_id[2]
		+5*(int)_id[3]
		+8*(int)_id[4]
		+4*(int)_id[5]
		+2*(int)_id[6]
		+1*(int)_id[7]
		+6*(int)_id[8]
		+3*(int)_id[9]
		+7*(int)_id[10]
		+9*(int)_id[11]
		+10*(int)_id[12]
		+5*(int)_id[13]
		+8*(int)_id[14]
		+4*(int)_id[15]
		+2*(int)_id[16])
		/11;
	
}
