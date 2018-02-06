virtual bool const operator == (var const &) const;

virtual bool const operator == (std::string const &) const;
virtual bool const operator == (char const * const) const;
//virtual bool const operator == (unsigned char const []) const;
//virtual bool const operator == (signed char const []) const;
virtual bool const operator == (char const &) const;
//virtual bool const operator == (unsigned char const &) const;
//virtual bool const operator == (signed char const &) const;

virtual bool const operator == (cln::nr const &) const;
virtual bool const operator == (cln::nr::complex const &) const;
virtual bool const operator == (cln::nr::real const &) const;
virtual bool const operator == (cln::nr::rational const &) const;
virtual bool const operator == (cln::nr::integer const &) const;
virtual bool const operator == (cln::nr::_float const &) const;
virtual bool const operator == (cln::nr::short_float const &) const;
virtual bool const operator == (cln::nr::single_float const &) const;
virtual bool const operator == (cln::nr::double_float const &) const;
virtual bool const operator == (cln::nr::long_float const &) const;

virtual bool const operator == (long double const &) const;
virtual bool const operator == (double const &) const;
virtual bool const operator == (float const &) const;

virtual bool const operator == (unsigned long long int const &) const;
virtual bool const operator == (unsigned long int const &) const;
virtual bool const operator == (unsigned int const &) const;
virtual bool const operator == (unsigned short int const &) const;

virtual bool const operator == (signed long long int const &) const;
virtual bool const operator == (signed long int const &) const;
virtual bool const operator == (signed int const &) const;
virtual bool const operator == (signed short int const &) const;
