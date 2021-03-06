#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <thread>
#include <mutex>
#include <chrono>
#include <locale>
#include <time.h>
#include <math.h>
#include <getopt.h>
#include <signal.h>
#include <execinfo.h>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

#include "uv.h"
#include "json.h"
#include "sqlite3.h"
#include "uWS/uWS.h"
#include "curl/curl.h"
#include "openssl/hmac.h"
#include "openssl/sha.h"
#include "openssl/md5.h"
#include "ncurses/ncurses.h"
#include "quickfix/Application.h"
#include "quickfix/SocketInitiator.h"
#include "quickfix/FileStore.h"
#include "quickfix/FileLog.h"
#include "quickfix/SessionSettings.h"
#include "quickfix/fix42/NewOrderSingle.h"
#include "quickfix/fix42/ExecutionReport.h"
#include "quickfix/fix42/OrderCancelRequest.h"
#include "quickfix/fix42/OrderCancelReject.h"

using namespace nlohmann;

#include "km.h"
#include "fn.h"
#include "cf.h"
#include "ev.h"
#include "db.h"
#include "ui.h"
#include "qp.h"
#include "og.h"
#include "mg.h"
#include "pg.h"
#include "qe.h"
#include "gw.h"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;int main(int argc, char** argv) {;;;
;;;;K::CF::main(argc, argv);;;;;;;;;;;
;;;;K::EV::main();;;;;;;;;;;;;;;;;;;;;
;;;;K::UI::main();;;;    ;;;;    ;;;;;
;;;;K::DB::main();;;;    ;;    ;;;;;;;
;;;;K::QP::main();;;;        ;;;;;;;;;
;;;;K::OG::main();;;;        ;;;;;;;;;
;;;;K::MG::main();;;;    ;;    ;;;;;;;
;;;;K::PG::main();;;;    ;;;;    ;;;;;
;;;;K::QE::main();;;;    ;;;;    ;;;;;
;;;;K::GW::main();;;;;;;;;;;;    ;;;;;
;;;;return EXIT_FAILURE;;;;;;;;;;;;;;;
;;};;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
