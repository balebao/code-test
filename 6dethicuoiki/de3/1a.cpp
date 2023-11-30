// trình bày dưới dạng chồng toán tử

class A_B_Sqrt_X{
		private:
			int _a;
			int _b;
			int _SO_DUOI_DAU_CAN;
		public:
			A_B_Sqrt_X operator+(const A_B_Sqrt_X&);
			A_B_Sqrt_X operator-(const A_B_Sqrt_X&);
			A_B_Sqrt_X operator-();
			A_B_Sqrt_X operator*(const A_B_Sqrt_X&);
			friend ostream& operator<<(ostream&,const A_B_Sqrt_X&);
			friend istream& operator>>(istream&, A_B_Sqrt_X&);
		};