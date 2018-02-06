virtual var const & operator = (var const &);

virtual var const & operator = (std::string const &);
virtual var const & operator = (char const * const);
//virtual var const & operator = (const unsigned char []);
//virtual var const & operator = (const signed char []);
virtual var const & operator = (char const &);
//virtual var const & operator = (const unsigned char &);
//virtual var const & operator = (const signed char &);

virtual var const & operator = (cln::nr const &);
virtual var const & operator = (cln::nr::complex const &);
virtual var const & operator = (cln::nr::real const &);
virtual var const & operator = (cln::nr::rational const &);
virtual var const & operator = (cln::nr::integer const &);
virtual var const & operator = (cln::nr::_float const &);
virtual var const & operator = (cln::nr::short_float const &);
virtual var const & operator = (cln::nr::single_float const &);
virtual var const & operator = (cln::nr::double_float const &);
virtual var const & operator = (cln::nr::long_float const &);

virtual var const & operator = (long double const &);
virtual var const & operator = (double const &);
virtual var const & operator = (float const &);

virtual var const & operator = (unsigned long long int const &);
virtual var const & operator = (unsigned long int const &);
virtual var const & operator = (unsigned int const &);
virtual var const & operator = (unsigned short int const &);

virtual var const & operator = (signed long long int const &);
virtual var const & operator = (signed long int const &);
virtual var const & operator = (signed int const &);
virtual var const & operator = (signed short int const &);
