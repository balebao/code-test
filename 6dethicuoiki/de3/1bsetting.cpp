	//cài đặt mã cho Các thao tác trên kiểu số này bao gồm nhập, xuất, phép cộng, phép trừ, phép đổi dấu,phép nhân.
	int A_B_Sqrt_X::_SO_DUOI_DAU_CAN=7;
		A_B_Sqrt_X(const int& a, const int& b){
			this->_a=a;
			this->_b=b;
		}
		//cộng
		A_B_Sqrt_X A_B_Sqrt_X::operator+(const A_B_Sqrt_X& a_b_Sq_x){
			A_B_Sqrt_X result(this->_a+a_b_Sq_x._a,this->_b+a_b_Sq_x._b);
			return result;
		}
		//trừ
		A_B_Sqrt_X A_B_Sqrt_X::operator-(const A_B_Sqrt_X& a_b_Sq_x){
			A_B_Sqrt_X result(this->_a-a_b_Sq_x._a,this->_b-a_b_Sq_x._b);
			return result;
		}
		//đổi dấu
		A_B_Sqrt_X A_B_Sqrt_X::operator-(){
			A_B_Sqrt_X result(-this->_a,-this->_b);
			return result;
		}
		//nhân
		A_B_Sqrt_X A_B_Sqrt_X::operator*(const A_B_Sqrt_X& a_b_Sq_x){
			A_B_Sqrt_X result;
			result._a=this->_a*a_b_Sq_x._a + this->_b*a_b_Sq_x._b*this->_SO_DUOI_DAU_CAN;
			result._b=this->_a*a_b_Sq_x._b + this->_b*a_b_Sq_x._a;
			return result;
		}
		// hàm nhập
		friend istream& operator>>(istream& is, A_B_Sqrt_X& a_b_Sq_x){
			is>>a_b_Sq_x._a;
			is>>a_b_Sq_x._b;
			return is;
		}
		//hàm xuất
		friend ostream& operator<<(ostream& os, const A_B_Sqrt_X& a_b_Sq_x){
			os<<a_b_Sq_x._a<<" + ("<<a_b_Sq_x._b<<")*sqrt("<<a_b_Sq_x._SO_DUOI_DAU_CAN<<")";
			return os;
		}