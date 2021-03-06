################################################################################
#
#            !!!!!   Do NOT edit this file directly!   !!!!!
#
#            Edit mktests.PL and/or parts/inc/mPUSH instead.
#
#  This file was automatically generated from the definition files in the
#  parts/inc/ subdirectory by mktests.PL. To learn more about how all this
#  works, please read the F<HACKERS> file that came with this distribution.
#
################################################################################

use FindBin ();

BEGIN {
  if ($ENV{'PERL_CORE'}) {
    chdir 't' if -d 't';
    unshift @INC, '../lib' if -d '../lib' && -d '../ext';
    require Config; import Config;
    use vars '%Config';
    if (" $Config{'extensions'} " !~ m[ Devel/PPPort ]) {
      print "1..0 # Skip -- Perl configured without Devel::PPPort module\n";
      exit 0;
    }
  }

  use lib "$FindBin::Bin";
  use lib "$FindBin::Bin/../parts/inc";

  die qq[Cannot find "$FindBin::Bin/../parts/inc"] unless -d "$FindBin::Bin/../parts/inc";

  sub load {
    require 'testutil.pl';
    require 'inctools';
  }

  if (10) {
    load();
    plan(tests => 10);
  }
}

use Devel::PPPort;
use strict;
BEGIN { $^W = 1; }

package Devel::PPPort;
use vars '@ISA';
require DynaLoader;
@ISA = qw(DynaLoader);
bootstrap Devel::PPPort;

package main;

is(join(':', &Devel::PPPort::mPUSHs()), "foo:bar:42");
is(join(':', &Devel::PPPort::mPUSHp()), "one:two:three");
is(join(':', &Devel::PPPort::mPUSHn()), "0.5:-0.25:0.125");
is(join(':', &Devel::PPPort::mPUSHi()), "-1:2:-3");
is(join(':', &Devel::PPPort::mPUSHu()), "1:2:3");

is(join(':', &Devel::PPPort::mXPUSHs()), "foo:bar:42");
is(join(':', &Devel::PPPort::mXPUSHp()), "one:two:three");
is(join(':', &Devel::PPPort::mXPUSHn()), "0.5:-0.25:0.125");
is(join(':', &Devel::PPPort::mXPUSHi()), "-1:2:-3");
is(join(':', &Devel::PPPort::mXPUSHu()), "1:2:3");

