/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/theFool/Documents/Appcelerator_Studio_Workspace/fusedlocation/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/theFool/Documents/Appcelerator_Studio_Workspace/fusedlocation/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ca.underlabs.fusedlocation.FusedlocationModule.h"


#line 13 "/Users/theFool/Documents/Appcelerator_Studio_Workspace/fusedlocation/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class FusedlocationModuleBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
FusedlocationModuleBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
FusedlocationModuleBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 46,
      MAX_WORD_LENGTH = 46,
      MIN_HASH_VALUE = 46,
      MAX_HASH_VALUE = 46
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 15 "/Users/theFool/Documents/Appcelerator_Studio_Workspace/fusedlocation/android/build/generated/KrollGeneratedBindings.gperf"
      {"ca.underlabs.fusedlocation.FusedlocationModule",::ca::underlabs::fusedlocation::FusedlocationModule::bindProxy,::ca::underlabs::fusedlocation::FusedlocationModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/Users/theFool/Documents/Appcelerator_Studio_Workspace/fusedlocation/android/build/generated/KrollGeneratedBindings.gperf"

