//friend const nr operator += (text &, const nr &);
friend const std::string operator += (std::string &, const nr &);
//friend const nr operator += (char [], const nr &);
friend const char operator += (char &, const nr &);
//friend const nr operator += (signed char &, const nr &);
//friend const nr operator += (unsigned char &, const nr &);
friend const nr operator += (cln::cl_N &, const nr &);
friend const nr operator += (cln::cl_RA &, const nr &);
friend const nr operator += (cln::cl_I &, const nr &);
friend const nr operator += (cln::cl_SF &, const nr &);
friend const nr operator += (cln::cl_FF &, const nr &);
friend const nr operator += (cln::cl_DF &, const nr &);
friend const nr operator += (cln::cl_LF &, const nr &);
friend const nr operator += (long double &, const nr &);
friend const nr operator += (double &, const nr &);
friend const nr operator += (float &, const nr &);
friend const nr operator += (signed long long int &, const nr &);
friend const nr operator += (unsigned long long int &, const nr &);
friend const nr operator += (signed long int &, const nr &);
friend const nr operator += (unsigned long int &, const nr &);
friend const nr operator += (signed int &, const nr &);
friend const nr operator += (unsigned int &, const nr &);
friend const nr operator += (signed short int &, const nr &);
friend const nr operator += (unsigned short int &, const nr &);

