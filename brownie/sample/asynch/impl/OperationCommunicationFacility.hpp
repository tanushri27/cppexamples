//
// impl/OperationCommunicationFacility.hpp
//    backbone class for polymorphic communication to the callers
//
// Copyright (c) 2010, Mathias Czichi
// this file is part of the brownie Libraries and distributed under the license
// described at the end of the file

#ifndef brownie_asynch_impl_OperationCommunicationFacility_hpp
#define brownie_asynch_impl_OperationCommunicationFacility_hpp

namespace brownie {
namespace asynch {
namespace impl {

class OperationCommunicationFacility {
   protected:
      typedef void (*SendFunction)(void*,
                                   bool);
   
   public:
      void sendResult() {
         if (mpSendFunc != 0) {
            (*mpSendFunc)(mpConcreteCall, true);
         }
      } // void sendResult()
      
      void sendError() {
         if (mpSendFunc != 0) {
            (*mpSendFunc)(mpConcreteCall, false);
         }
      } // void sendError()
   
   public:
      void* const getCalleePtr() const {
         return mpCallee;
      } // void* const getCalleePtr() const
      
   protected:
      OperationCommunicationFacility(void* pConcreteCall,
                                     SendFunction pSendFunc)
      : mpConcreteCall(pConcreteCall)
      , mpSendFunc(pSendFunc)
      , mpCallee(0) { }
      
      void*& calleePtr() {
         return mpCallee;
      } // void*& calleePtr()
      
      void* const calleePtr() const {
         return mpCallee;
      } // void* const calleePtr() const
      
   private:
      void* mpConcreteCall;
      SendFunction mpSendFunc;
      void* mpCallee;
}; // class OperationCommunicationFacility

} // namespace impl
} // namespace asynch
} // namespace brownie
#endif // brownie_asynch_impl_OperationCommunicationFacility_hpp

// LICENSE
//
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
