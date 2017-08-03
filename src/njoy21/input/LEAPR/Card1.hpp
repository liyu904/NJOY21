class Card1 {
public:
  using Nout = argument::common::Nout;
  Argument < Nout > nout;

  template< typename Char> 
  Card1( iRecordStream < Char >& iss )
    try:
      nout( argument::extract < Nout > ( iss ) ){
        Card::clear( iss );
      }
    catch( std::exception& e) {
      Log::info( "Trouble while validating Card 1" );
      throw e;
    }
};
