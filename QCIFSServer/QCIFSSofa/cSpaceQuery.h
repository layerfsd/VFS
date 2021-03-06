// Copyright 2018 Grass Valley, A Belden Brand

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//cSpaceQuery.h

#pragma once
#include "..\qcifsfwk\ispacequery.h"

class cSpaceQuery : public iSpaceQuery, public vfs::cRefCount
{
public:
  cSpaceQuery(void);
  ~cSpaceQuery(void);
  
  unsigned __int64 freeSpace() const;
  unsigned __int64 totalSpace() const;

private:
  inline MEMORYSTATUSEX getCurrentMemoryStatus() const;
};

class cISASpaceQuery : public iSpaceQuery, public vfs::cRefCount
{
public:
  unsigned __int64 freeSpace() const;
  unsigned __int64 totalSpace() const;
};