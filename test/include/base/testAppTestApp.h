//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef TEST_APPTESTAPP_H
#define TEST_APPTESTAPP_H

#include "MooseApp.h"

class testAppTestApp;

template <>
InputParameters validParams<testAppTestApp>();

class testAppTestApp : public MooseApp
{
public:
  testAppTestApp(InputParameters parameters);
  virtual ~testAppTestApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s, bool use_test_objs = false);
};

#endif /* TEST_APPTESTAPP_H */
