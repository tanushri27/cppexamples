// brownie Libraries
// 
// Copyright (c) 2010, Mathias Czichi
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
// 
//    1) Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//       
//    2) Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimer in the documentation
//       and/or other materials provided with the distribution.
//       
//    3) Neither the name of Mathias Czichi nor the names of its contributors may
//       be used to endorse or promote products derived from this software without
//       specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// modified to use MoCCA implementation of the JobExecutor concept if HB_MOCCAV2
// is defined

#ifndef brownie_asynch_JobExecutor_hpp
#define brownie_asynch_JobExecutor_hpp

#include "Job.hpp"

#ifndef HB_MOCCAV2
#include "impl/SimpleJobExecutor.hpp"
#elif TESTENVIRONMENT
#include "impl/SimpleJobExecutor.hpp"
#else
#include "impl/MoCCAJobExecutor.hpp"
#endif

#endif // brownie_asynch_JobExecutor_hpp
