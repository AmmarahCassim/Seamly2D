/****************************************************************************
 **
 **  Copyright (C) 2013 Valentina project All Rights Reserved.
 **
 **  This file is part of Valentina.
 **
 **  Tox is free software: you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation, either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  Valentina is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with Valentina.  If not, see <http://www.gnu.org/licenses/>.
 **
 ****************************************************************************/

#ifndef DIALOGHEIGHT_H
#define DIALOGHEIGHT_H

#include "dialogtool.h"

namespace Ui {
class DialogHeight;
}

class DialogHeight : public DialogTool{
    Q_OBJECT
public:
    explicit         DialogHeight(const VContainer *data, Draw::Draws mode = Draw::Calculation,
                                  QWidget *parent = 0);
                     ~DialogHeight();
    inline QString   getPointName() const {return pointName;}
    void             setPointName(const QString &value);
    inline QString   getTypeLine() const {return typeLine;}
    void             setTypeLine(const QString &value);
    inline qint64    getBasePointId() const {return basePointId;}
    void             setBasePointId(const qint64 &value, const qint64 &id);
    inline qint64    getP1LineId() const {return p1LineId;}
    void             setP1LineId(const qint64 &value, const qint64 &id);
    inline qint64    getP2LineId() const{return p2LineId;}
    void             setP2LineId(const qint64 &value, const qint64 &id);
public slots:
    virtual void     ChoosedObject(qint64 id, Scene::Scenes type);
    virtual void     DialogAccepted();
private:
    Q_DISABLE_COPY(DialogHeight)
    Ui::DialogHeight *ui;
    qint32           number;
    QString          pointName;
    QString          typeLine;
    qint64           basePointId;
    qint64           p1LineId;
    qint64           p2LineId;
};

#endif // DIALOGHEIGHT_H