// operator *=

noware::var const noware::var::operator *= (var const & other)
{
	if (_type == type::nr && other._type == type::nr)
	{
		_nr *= other._nr;
		_string = "";
	}
	
	return *this;
}
noware::var const noware::var::operator *= (std::string const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (char const * const other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (char const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::complex const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::real const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::rational const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::integer const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::_float const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::short_float const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::single_float const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::double_float const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (cln::nr::long_float const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (long double const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (double const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (float const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (signed long long int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (unsigned long long int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (signed long int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (unsigned long int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (signed int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (unsigned int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (signed short int const & other)
{
	return *this *= var (other);
}

noware::var const noware::var::operator *= (unsigned short int const & other)
{
	return *this *= var (other);
}
