// cài đặt countall 
int countAll(){
		int count=0;
		for(absList* temp=this;temp;temp=temp->subLst){
			count++;
		}
		return count;
	}
//cài đặt void showAll(ostream&):
	void showAll(ostream& outDev){
		for(absList* temp=this;temp;temp=temp->subLst){
			outDev<<temp->dataId<<" ";
		}
		outDev<<endl;
		return;
	}