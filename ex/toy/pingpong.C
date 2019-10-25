/******************************
  Program "ex/toy/pingpong.m" compiled by "Murphi Release 3.1"

  Murphi Last Modefied Date: "Jan 29 1999"
  Murphi Last Compiled date: "Oct 18 2019"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Murphi Release 3.1"
#define MURPHI_DATE "Jan 29 1999"
#define PROTOCOL_NAME "ex/toy/pingpong"
#define BITS_IN_WORLD 32
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.inc"

/********************
  Decl declaration
 ********************/

class mu_1_player_t: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_player_t& val) { return mu__byte::operator=((int) val); };
  mu_1_player_t (char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_player_t (void): mu__byte(0, 1, 2) {};
  mu_1_player_t (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_player_t mu_1_player_t_undefined_var;

class mu_1__type_0
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( char *n, char *n2, int os);
  void set_self_ar( char *n, char *n2, int os);
  void set_self(char *n, int os);
  mu_0_boolean mu_hasball;
  mu_0_boolean mu_gotball;
  mu_1__type_0 ( char *n, int os ) { set_self(n,os); };
  mu_1__type_0 ( void ) {};

  virtual ~mu_1__type_0(); 
friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    w = CompareWeight(a.mu_hasball, b.mu_hasball);
    if (w!=0) return w;
    w = CompareWeight(a.mu_gotball, b.mu_gotball);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    w = Compare(a.mu_hasball, b.mu_hasball);
    if (w!=0) return w;
    w = Compare(a.mu_gotball, b.mu_gotball);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_hasball.MultisetSort();
    mu_gotball.MultisetSort();
  }
  void print_statistic()
  {
    mu_hasball.print_statistic();
    mu_gotball.print_statistic();
  }
  void clear() {
    mu_hasball.clear();
    mu_gotball.clear();
 };
  void undefine() {
    mu_hasball.undefine();
    mu_gotball.undefine();
 };
  void reset() {
    mu_hasball.reset();
    mu_gotball.reset();
 };
  void print() {
    mu_hasball.print();
    mu_gotball.print();
  };
  void print_diff(state *prevstate) {
    mu_hasball.print_diff(prevstate);
    mu_gotball.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_hasball.to_state(thestate);
    mu_gotball.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1__type_0& operator= (const mu_1__type_0& from) {
    mu_hasball.value(from.mu_hasball.value());
    mu_gotball.value(from.mu_gotball.value());
    return *this;
  };
};

  void mu_1__type_0::set_self_ar( char *n1, char *n2, int os ) {
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( char *n1, char *n2, int os ) {
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self(char *n, int os)
{
  name = n;
  mu_hasball.set_self_2(name, ".hasball", os + 0 );
  mu_gotball.set_self_2(name, ".gotball", os + 8 );
}

mu_1__type_0::~mu_1__type_0()
{
}

/*** end record declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_1__type_0 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( char *n, int os);
  void set_self_2( char *n, char *n2, int os);
  void set_self_ar( char *n, char *n2, int os);
  mu_1__type_1 (char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1__type_0& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
        Error.Error("Indexing to %s using an undefined value.", name);
      else
        Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( char *n1, char *n2, int os ) {
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( char *n1, char *n2, int os ) {
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( char *n, int os)
{
  char* s;
  name = n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

/*** Variable declaration ***/
mu_1__type_1 mu_Players("Players",0);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_Players.clear();
}
void world_class::undefine()
{
  mu_Players.undefine();
}
void world_class::reset()
{
  mu_Players.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Players.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Players.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_Players.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_Players.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Pass ball, p:%s", mu_p.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
  return mu_ping.mu_hasball;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    while (what_rule < 2 )
      {
        if ( ( TRUE  ) ) {
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
              if (mu_ping.mu_hasball) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 0;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
mu_ping.mu_hasball = mu_false;
mu_pong.mu_gotball = mu_true;
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Keep ball, p:%s", mu_p.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
  return mu_ping.mu_hasball;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2;
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    while (what_rule < 4 )
      {
        if ( ( TRUE  ) ) {
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
              if (mu_ping.mu_hasball) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 2;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Get ball, p:%s", mu_p.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
  return mu_ping.mu_gotball;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    while (what_rule < 6 )
      {
        if ( ( TRUE  ) ) {
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
              if (mu_ping.mu_gotball) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 4;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
mu_ping.mu_hasball = mu_true;
mu_ping.mu_gotball = mu_false;
  };

  bool UnFair()
  { return FALSE; }
};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<2)
    { R0.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<4)
    { R1.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<6)
    { R2.NextRule(what_rule);
      if (what_rule<6) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=1) return R0.Condition(r-0);
  if (r>=2 && r<=3) return R1.Condition(r-2);
  if (r>=4 && r<=5) return R2.Condition(r-4);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
void Code(unsigned r)
{
  if (r<=1) { R0.Code(r-0); return; } 
  if (r>=2 && r<=3) { R1.Code(r-2); return; } 
  if (r>=4 && r<=5) { R2.Code(r-4); return; } 
}
int Priority(unsigned short r)
{
  if (r<=1) { return R0.Priority(); } 
  if (r>=2 && r<=3) { return R1.Priority(); } 
  if (r>=4 && r<=5) { return R2.Priority(); } 
}
char * Name(unsigned r)
{
  if (r<=1) return R0.Name(r-0);
  if (r>=2 && r<=3) return R1.Name(r-2);
  if (r>=4 && r<=5) return R2.Name(r-4);
  return NULL;
}
};
const unsigned numrules = 6;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 6


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Startstate 0, p:%s", mu_p.Name());
  }
  void Code(unsigned short r)
  {
    static mu_1_player_t mu_p;
    mu_p.value((r % 2) + 0);
    r = r / 2;
  mu_1__type_0& mu_ping = mu_Players[mu_p];
  mu_1__type_0& mu_pong = mu_Players[(1) - (mu_p)];
mu_ping.mu_hasball = mu_true;
mu_ping.mu_gotball = mu_false;
mu_pong.clear();
  };

  bool UnFair()
  { return FALSE; }
};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=1) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=1) return S0.Name(r-0);
  return NULL;
}
};
unsigned short StartStateManager::numstartstates = 2;

/********************
  Invariant records
 ********************/
int mu__invariant_2() // Invariant "Only one ball in play."
{
bool mu__quant3; 
mu__quant3 = TRUE;
{
for(int mu_p = 0; mu_p <= 1; mu_p++) {
bool mu__boolexpr4;
bool mu__boolexpr5;
bool mu__boolexpr6;
  if (!(mu_Players[mu_p].mu_hasball)) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = (mu_Players[mu_p].mu_gotball) ; 
}
  if (!(!(mu__boolexpr6))) mu__boolexpr5 = FALSE ;
  else {
bool mu__boolexpr7;
  if (mu_Players[mu_p].mu_hasball) mu__boolexpr7 = TRUE ;
  else {
  mu__boolexpr7 = (mu_Players[mu_p].mu_gotball) ; 
}
  mu__boolexpr5 = (mu__boolexpr7) ; 
}
  if (!(mu__boolexpr5)) mu__boolexpr4 = TRUE ;
  else {
bool mu__quant8; 
mu__quant8 = TRUE;
{
for(int mu_q = 0; mu_q <= 1; mu_q++) {
bool mu__boolexpr9;
bool mu__boolexpr10;
  if (mu_Players[mu_q].mu_hasball) mu__boolexpr10 = TRUE ;
  else {
  mu__boolexpr10 = (mu_Players[mu_q].mu_gotball) ; 
}
  if (!(mu__boolexpr10)) mu__boolexpr9 = TRUE ;
  else {
  mu__boolexpr9 = ((mu_p) == (mu_q)) ; 
}
if ( !(mu__boolexpr9) )
  { mu__quant8 = FALSE; break; }
};
};
  mu__boolexpr4 = (mu__quant8) ; 
}
if ( !(mu__boolexpr4) )
  { mu__quant3 = FALSE; break; }
};
};
return mu__quant3;
};

bool mu__condition_11() // Condition for Rule "Only one ball in play."
{
  return mu__invariant_2( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"Only one ball in play.", &mu__condition_11, NULL, FALSE},
};
const unsigned short numinvariants = 1;

/******************/
bool mu__true_live() { return TRUE; }
/******************/

/********************
  Liveness records
 ********************/
const liverec livenesses[] = {
{ NULL, NULL, NULL, NULL, E }};
const unsigned short numlivenesses = 0;

/********************
  Fairstates records
 ********************/
const rulerec fairnesses[] = {
{ NULL, NULL, NULL, FALSE }};
const unsigned short numfairnesses = 0;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Players:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_Players.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_player_t::Permute(PermSet& Perm, int i) {};
void mu_1_player_t::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_player_t::Canonicalize(PermSet& Perm) {};
void mu_1_player_t::SimpleLimit(PermSet& Perm) {};
void mu_1_player_t::ArrayLimit(PermSet& Perm) {};
void mu_1_player_t::Limit(PermSet& Perm) {};
void mu_1_player_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm)
{
};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm){}
void mu_1__type_0::Limit(PermSet& Perm)
{
};
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_Players.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Players.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_Players.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Players.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_Players.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Players.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_Players.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Players.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Players.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.inc"
