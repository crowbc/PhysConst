% Object class for constants commonly used in physics. Constants are
% obtained from NIST unless otherwise specified. Constants all use SI mks
% units unless otherwise stated. The constants included in this class are
% g, G, c, e, me, mp, amu, Na, k, eps0 (epsilon0), mu0, G0, Phi0, F, alpha,
% h, hbar, Rinf (Rinfinity), and sigma. For a description of any of these
% constants, see the comments preceding the constant of interest.
% 
% Instructions for use: put the PhysConst.m file in your MATLAB folder, the
% default search path folder, or the folder containing the file in which
% you wish to use this class. Near the top of the code for the script or
% function, type the following command:
% 
% import PhysConst
% 
% To call a constant within the script, type PhysConst.constantName. For
% example, to use G to calculate the gravitational force exerted on object
% 1 by object 2 at distance r in classical mechanics, type the following:
% 
% force = PhysConst.G*m1*m2/r^2
% 
% To use the units (e.g. for plot labels) in a string or string array:
% 
% title(['Calculated value for g, ' PhysConst.gUnits])
% 
% It is worth noting that having this file in a different folder than the
% script calling it will lengthen the search time.

classdef PhysConst
    properties(Constant)
        % g, acceleration due to gravity at earth's surface in Honolulu, HI
        % (m/s^2) (from Wolfram Alpha)
        g = 9.78452;
        % no standard uncertainty: exact value
        gUnits = 'm/s^2';
        % G, Newtonian gravitational constant (N*m/kg^2) or (m^3/(kg*s^2))
        G = 6.67384e-11;
        % standard uncertainty (N*m/kg^2)
        deltaG = 8.0e-15;
        GUnits = 'm^3/{kg*s^2}';
        % c, speed of light in vacuo (m/s)
        c = 299792458;
        % no standard uncertainty: exact value
        cUnits = 'm/s';
        % e, elementary charge (C)
        e = 1.602176565e-19;
        % standard uncertainty (C)
        deltae = 3.5e-27;
        eUnits = 'C';
        % me, electron mass (kg)
        me = 9.10938291e-31;
        % standard uncertainty (kg)
        deltaMe = 4.0e-38;
        meUnits = 'kg';
        % mp, proton mass (kg)
        mp = 1.672621777e-27;
        % standard uncertainty (kg)
        deltaMp = 7.4e-35;
        mpUnits = 'kg';
        % amu, atomic mass constant (kg)
        amu = 1.660538921e-27;
        % standard uncertainty (kg)
        deltaAmu = 7.3e-35;
        % Na, Avogadro's constant (/mol)
        Na = 6.02214129e+23;
        % standard uncertainty (/mol)
        deltaNa = 2.7e16;
        NaUnits = 'mol^{-1}';
        % k, Boltzmann's constant (J/K)
        k = 1.3806488e-23;
        % standard uncertainty (J/K)
        deltak = 1.3e-29;
        kUnits = 'J/K';
        % eps0, permitivity of free space (F/m)
        eps0 = 8.854187817e-12;
        % no standard uncertainty: exact value
        eps0Units = 'F/m';
        % mu0, magnetic permeability of free space (N/A^2)
        mu0 = pi*4e-07;
        % no standard uncertainty: exact value
        mu0Units = 'N/A^2';
        % G0, conductance quantum (S)
        G0 = 7.7480917346e-05;
        % standard uncertainty (S)
        deltaG0 = 2.5e-09;
        G0Units = 'S';
        % Phi0, magnetic flux quantum (Wb)
        Phi0 = 2.067833758e-15;
        % standard uncertainty (Wb)
        deltaPhi0 = 4.6e-23;
        Phi0Units = 'Wb';
        % F, Faraday's constant (C/mol)
        F = 96485.3365;
        % standard uncertainty (C/mol)
        deltaF = 0.0021;
        FUnits = 'C/mol';
        % alpha, fine structure constant
        alpha = 7.9273525698e-3;
        % standard uncertainty
        deltaAlpha = 2.4e-12;
        alphaUnits = 'unitless';
        % h, Planck's constant (J*s)
        h = 6.62606957e-34;
        % standard uncertainty (J*s)
        deltah = 2.9e-41;
        hUnits = 'J*s';
        % hbar, reduced Planck's constant (J*s)
        hbar = 1.054571726e-34;
        % standard uncertainty (J*s)
        deltaHbar = 4.7e-42;
        hbarUnits = 'J*s';
        % Rinf, Rydberg constant (/m)
        Rinf = 10973731.568539;
        % standard uncertainty (/m)
        deltaRinf = 0.000055;
        RinfUnits = 'm^{-1}';
        % sigma, Stefan-Boltzmann constant (W/(m^2*K^4))
        sigma = 5.670373e-08;
        % standard uncertainty (W/(m^2*K^4))
        deltaSigma = 2.1e-13;
        sigmaUnits = 'W/{m^2*K^4}';
    end
end