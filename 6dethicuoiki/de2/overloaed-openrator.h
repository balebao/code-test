//viet lai 5 phuong thuc
		PhanSo(){
			this->tu=0;
			this->mau=1;
		}
		PhanSo(const int&tu,const int& mau){
			this->tu=tu;
			this->mau=mau;
			if(this->mau==0){
				cout<<"Mau khong duoc bang 0\n";
				this->tu=0;
				this->mau=0;
			}
		}
		PhanSo operator+(const PhanSo& ps){
			PhanSo newPhanSo(this->tu*ps.mau+this->mau*ps.tu,this->mau*ps.mau);
			return newPhanSo;
			
		}
		PhanSo operator+=(const PhanSo& ps){
			this->tu=this->tu*ps.mau+this->mau*ps.tu;
			this->mau*=ps.mau;
			return *this;
		}
		PhanSo operator+(const int& iNum){
			PhanSo newPhanSo(this->tu+iNum*this->mau,this->mau);
			return newPhanSo;
		}
		PhanSo operator++(){
			this->tu+=this->mau;
			return *this;
		}
		operator int(int iNum){
			PhanSo newPhanSo(iNum,1);
			return newPhanSo;
		}
		friend ostream& operator<<(ostream& os, const PhanSo& ps){
			os<<ps.tu<<"/"<<ps.mau;
			return os;
		}
		~PhanSo(){
			this->tu=0;
			this->mau=1;
		}