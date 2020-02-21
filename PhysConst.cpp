/*
This file contains an object class originally developed in MATLAB. 
All instructions have been modified for use in C++.

Object class for constants commonly used in physics. Constants are 
obtained from NIST unless otherwise specified. Constants all use SI 
mks units unless otherwise stated. The constants included in this 
class are g, G, c, e, me, mp, amu, Na, k, eps0 (epsilon0), mu0, G0,
Phi0, F, alpha, h, hbar, Rinf (Rinfinity), and sigma. For a 
description of any of these constants, see the comments preceding 
the constant of interest.

Instructions for use:
- Class library not implemented

Version history:
        v0.1.0: Initial version
*/
/*
Author: Brian Crow
Created on: 21FEB2020
Modified on: 21FEB2020
*/

// include statements
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;
// Declare constants and function headers
class PhysConst
{
    public:
    const double PI=3.14159265358979323846;
    // g, acceleration due to gravity at earth's surface in Honolulu,
    // HI (m/s^2) (from Wolfram Alpha)
        const std::string GName="g";
        const std::string GDesc="acceleration due to gravity at earth's surface in Honolulu, HI";
        const double G=9.78888;
        // standard uncertainty unknown
        const std::string GUnits="m/s^2";
    // G, Newtonian gravitational constant (N*m/kg^2) or (m^3/(kg*s^2))
        const std::string GGName="G";
        const std::string GGDesc="Newtonian gravitational constant";
        const double GG = 6.67384e-11;
        // standard uncertainty (N*m/kg^2)
        const double deltaGG = 8.0e-15;
        const std::string GGUnits = "m^3/(kg*s^2)";
    // c, speed of light in vacuo (m/s)
        const std::string CName="c";
        const std::string CDesc="speed of light in vacuo";
        const double C=299792458;
        // no standard uncertainty: exact value
        const std::string CUnits="m/s";
    // e, elementary charge (C)
        const std::string EName="E";
        const std::string EDesc="elementary charge";
        const double E=1.602176565e-19;
        // standard uncertainty (C)
        const double deltaE=3.5e-27;
        const std::string EUnits="C";
    // me, electron mass (kg)
        const std::string MEName="me";
        const std::string MEDesc="electron rest mass";
        const double ME=9.10938291e-31;
        // standard uncertainty (kg)
        const double deltaME = 4.0e-38;
        const std::string MEUnits="kg";
    // mp, proton mass (kg)
        std::string MPName="mp";
        std::string MPDesc="proton rest mass";
        double MP=1.672621777e-27;
        // standard uncertainty (kg)
        const double deltaMP=7.4e-35;
        const std::string MPUnits="kg";
    // amu, atomic mass constant (kg)
        const std::string AMUName="amu";
        const std::string AMUDesc="atomic mass constant";
        const double AMU = 1.660538921e-27;
        // standard uncertainty (kg)
        const double deltaAMU=7.3e-35;
        const std::string AMUUnits="kg";
    // Na, Avogadro's constant (/mol)
        const std::string NAName="Na";
        const std::string NADesc="Avogadro constant";
        const double NA=6.02214129e+23;
        // standard uncertainty (/mol)
        const double deltaNA=2.7e16;
        const std::string NAUnits="mol^(-1)";
    // k, Boltzmann's constant (J/K)
        const std::string KName="k";
        const std::string KDesc="Boltzmann constant";
        const double K=1.3806488e-23;
        // standard uncertainty (J/K)
        const double deltaK=1.3e-29;
        const std::string KUnits="J/K";
    // eps0, permitivity of free space (F/m)
        const std::string EPS0Name="epsilon0";
        const std::string EPS0Desc="permitivity of free space";
        const double EPS0 = 8.854187817e-12;
        // no standard uncertainty: exact value
        const std::string EPS0Units="F/m";
    // mu0, magnetic permeability of free space (N/A^2)
        const std::string MU0Name="mu0";
        const std::string MU0Desc="magnetic permeability of free space";
        const double MU0=PI*4e-07;
        // no standard uncertainty: exact value
        const std::string MU0Units="N/A^2";
    // G0, conductance quantum (S)
        const std::string G0Name="G0";
        const std::string G0Desc="conductance quantum";
        const double G0 = 7.7480917346e-05;
        // standard uncertainty (S)
        const double deltaG0=2.5e-09;
        const std::string G0Units="S";
    // Phi0, magnetic flux quantum (Wb)
        const std::string PHI0Name="Phi0";
        const std::string PHI0Desc="magnetic flux quantum";
        const double PHI0 = 2.067833758e-15;
        // standard uncertainty (Wb)
        const double deltaPHI0=4.6e-23;
        const std::string PHI0Units="Wb";
    // F, Faraday's constant (C/mol)
        const std::string FName="F";
        const std::string FDesc="Faraday constant";
        const double F = 96485.3365;
        // standard uncertainty (C/mol)
        const double deltaF = 0.0021;
        const std::string FUnits="C/mol";
    // alpha, fine structure constant
        const std::string ALPHAName="alpha";
        const std::string ALPHADesc="fine structure constant";
        const double ALPHA=7.9273525698e-3;
        // standard uncertainty
        const double deltaALPHA=2.4e-12;
        const std::string ALPHAUnits="unitless";
    // h, Planck's constant (J*s)
        const std::string HName="h";
        const std::string HDesc="Planck constant";
        const double H=6.62606957e-34;
        // standard uncertainty (J*s)
        const double deltaH=2.9e-41;
        const std::string HUnits="J*s";
    // hbar, reduced Planck's constant (J*s)
        const std::string HBARName="hbar";
        const std::string HBARDesc="reduced Planck's constant";
        const double HBAR=1.054571726e-34;
        // standard uncertainty (J*s)
        const double deltaHBAR=4.7e-42;
        const std::string HBARUnits="J*s";
    // Rinf, Rydberg constant (/m)
        const std::string RINFName="Rinfinity";
        const std::string RINFDesc="Rydberg constant";
        const double RINF=10973731.568539;
        // standard uncertainty (/m)
        const double deltaRINF=0.000055;
        const std::string RINFUnits="m^(-1)";
    // sigma, Stefan-Boltzmann constant (W/(m^2*K^4))
        const std::string SIGName="sigma";
        const std::string SIGDesc="Stefan-Boltzmann constant";
        const double SIG=5.670373e-08;
        // standard uncertainty (W/(m^2*K^4))
        const double deltaSIG=2.1e-13;
        const std::string SIGUnits = "W/(m^2*K^4)";
};
/*
    Main Function
*/
int main()
{
    // Print the constants and descriptions to the screen
    PhysConst MyConst;
    std::string newL="The ";
    std::string cs=", ";
    std::string eqs=" = ";
    std::string pm=" +/- ";
    std::string lEnd=".\n";
    std::cout << "Physical constants and their values and units:";
    std::cout << std::endl;
    std::cout << newL << MyConst.GDesc << cs << MyConst.GName;
    std::cout << eqs << MyConst.G << MyConst.GUnits << lEnd;
    std::cout << newL << MyConst.GGDesc << cs << MyConst.GGName;
    std::cout << eqs << MyConst.GG << pm << MyConst.deltaGG;
    std::cout << MyConst.GGUnits << lEnd;
    std::cout << newL << MyConst.CDesc << cs << MyConst.CName;
    std::cout << eqs << MyConst.C << lEnd;
    std::cout << newL << MyConst.EDesc << cs << MyConst.EName;
    std::cout << eqs << MyConst.E << pm << MyConst.deltaE;
    std::cout << MyConst.EUnits << lEnd;
    std::cout << newL << MyConst.MEDesc << cs << MyConst.MEName;
    std::cout << eqs << MyConst.ME << pm << MyConst.deltaME;
    std::cout << MyConst.MEUnits << lEnd;
    std::cout << newL << MyConst.MPDesc << cs << MyConst.MPName;
    std::cout << eqs << MyConst.MP << pm << MyConst.deltaMP;
    std::cout << MyConst.MPUnits << lEnd;
    std::cout << newL << MyConst.AMUDesc << cs << MyConst.AMUName;
    std::cout << eqs << MyConst.AMU << pm << MyConst.deltaAMU;
    std::cout << MyConst.AMUUnits << lEnd;
    std::cout << newL << MyConst.NADesc << cs << MyConst.NAName;
    std::cout << eqs << MyConst.NA << pm << MyConst.deltaNA;
    std::cout << MyConst.GGUnits << lEnd;
    std::cout << newL << MyConst.KDesc << cs << MyConst.KName;
    std::cout << eqs << MyConst.K << pm << MyConst.deltaK;
    std::cout << MyConst.KUnits << lEnd;
    std::cout << newL << MyConst.EPS0Desc << cs << MyConst.EPS0Name;
    std::cout << eqs << MyConst.EPS0 << pm;
    std::cout << MyConst.EPS0Units << lEnd;
    std::cout << newL << MyConst.MU0Desc << cs << MyConst.MU0Name;
    std::cout << eqs << MyConst.MU0 << pm;
    std::cout << MyConst.MU0Units << lEnd;
    std::cout << newL << MyConst.G0Desc << cs << MyConst.G0Name;
    std::cout << eqs << MyConst.G0 << pm << MyConst.deltaG0;
    std::cout << MyConst.G0Units << lEnd;
    std::cout << newL << MyConst.PHI0Desc << cs << MyConst.PHI0Name;
    std::cout << eqs << MyConst.PHI0 << pm << MyConst.deltaPHI0;
    std::cout << MyConst.PHI0Units << lEnd;
    std::cout << newL << MyConst.FDesc << cs << MyConst.FName;
    std::cout << eqs << MyConst.F << pm << MyConst.deltaF;
    std::cout << MyConst.FUnits << lEnd;
    std::cout << newL << MyConst.ALPHADesc << cs << MyConst.ALPHAName;
    std::cout << eqs << MyConst.ALPHA << pm << MyConst.deltaALPHA;
    std::cout << MyConst.ALPHAUnits << lEnd;
    std::cout << newL << MyConst.HDesc << cs << MyConst.HName;
    std::cout << eqs << MyConst.H << pm << MyConst.deltaH;
    std::cout << MyConst.HUnits << lEnd;
    std::cout << newL << MyConst.HBARDesc << cs << MyConst.HBARName;
    std::cout << eqs << MyConst.HBAR << pm << MyConst.deltaHBAR;
    std::cout << MyConst.HBARUnits << lEnd;
    std::cout << newL << MyConst.RINFDesc << cs << MyConst.RINFName;
    std::cout << eqs << MyConst.RINF << pm << MyConst.deltaRINF;
    std::cout << MyConst.RINFUnits << lEnd;
    std::cout << newL << MyConst.SIGDesc << cs << MyConst.SIGName;
    std::cout << eqs << MyConst.SIG << pm << MyConst.deltaSIG;
    std::cout << MyConst.SIGUnits << lEnd;
    return 0;
}// end main

/*
More functions go below when declared before main().
*/