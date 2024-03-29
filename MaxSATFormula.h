#ifndef _MAXSATFORMULA_H_
#define _MAXSATFORMULA_H_

#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

class Lit
{
public:
  int weight;
  int var;
  // int sense;
};

class SoftC
{
public:
  vector<Lit> clause;
  int weight;
  int degree;
};

class HardC
{
public:
  vector<Lit> clause;
  string str;
  int weight;
  int degree;
};

class MaxSATFormula
{
public:
  int num_vars, num_clauses;
  long long top_clause_weight;
  vector<SoftC> sclause;
  vector<HardC> hclause;
  map<string, int> name2var;
  map<int, string> var2name;
  void build_ins(const char *ifilename, MaxSATFormula &maxsatformula);
};

#endif