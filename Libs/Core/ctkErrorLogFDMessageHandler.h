/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

#ifndef __ctkErrorLogFDMessageHandler_h
#define __ctkErrorLogFDMessageHandler_h

// CTK includes
#include <ctkErrorLogModel.h>
#include "ctkCoreExport.h"

class ctkErrorLogFDMessageHandlerPrivate;

//------------------------------------------------------------------------------
class CTK_CORE_EXPORT ctkErrorLogFDMessageHandler : public ctkErrorLogAbstractMessageHandler
{
public:
  typedef ctkErrorLogAbstractMessageHandler Superclass;

  ctkErrorLogFDMessageHandler();
  virtual ~ctkErrorLogFDMessageHandler();

  static QString HandlerName;

  virtual QString handlerName()const;
  virtual void setEnabledInternal(bool value);

protected:
  QScopedPointer<ctkErrorLogFDMessageHandlerPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(ctkErrorLogFDMessageHandler);
  Q_DISABLE_COPY(ctkErrorLogFDMessageHandler);
};

#endif
