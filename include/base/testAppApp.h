//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef TEST_APPAPP_H
#define TEST_APPAPP_H

#include "MooseApp.h"

class testAppApp;

template <>
InputParameters validParams<testAppApp>();

class testAppApp : public MooseApp
{
public:
  testAppApp(InputParameters parameters);
  virtual ~testAppApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s);
};

#endif /* TEST_APPAPP_H */
